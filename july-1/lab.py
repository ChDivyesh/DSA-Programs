def originalText(string, key):
	orig_text = []
	for j in range(len(string)):
		a = (ord(string[j]) -ord(key[j]) + 26) % 26
		a += ord('A')
		orig_text.append(chr(a))
	return("" . join(orig_text))
	

string  = input("Enter the Message ")
key = "DECEPTIVEWEAREDISCOVEREDSAV"
print("Original Text",originalText(string, key))