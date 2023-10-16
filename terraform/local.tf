resource "local_file" "pet" {
	filename =  "/home/salman/Desktop/linux/bash-lab/terraform/pet.txt"
	content = "This is the sample content!"
	file_permission = "0700"
}
