use std::env;
use std::fs::File;
use std::io::{Error, ErrorKind, Result};
use std::path::Path;
use std::process::{Command, Stdio};

fn main() -> Result<()> {
	// Get command-line arguments
	let args: Vec<String> = env::args().collect();
	if args.len() != 3 {
		return Err(Error::new(
			ErrorKind::Other,
			"Usage: run <contest_id> <problem_id>",
		));
	}
	let contest_id = &args[1];
	let problem_id = &args[2];
	let problem_package_name = format!("{}_{}", problem_id, contest_id);

	// Construct the input file path
	let input_path = format!("./{}/{}/inp", contest_id, problem_id);
	let input_path = Path::new(&input_path);

	// Read the input file
	let input_file = File::open(input_path)?;

	let output = Command::new("cargo")
		.args(["run", "-p", &problem_package_name])
		.stdin(Stdio::from(input_file))
		.output()?;
	println!("{}", String::from_utf8_lossy(&output.stdout));

	Ok(())
}
