ciphertext='SEEMSEAOMEDSAMHL'

alphas=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
mapped=['A','N','D','R','E','W','I','C','K','S','O','H','T','B','F','G','J','L','M','P','Q','U','V','X','Y','Z']
plaintext=''
for i in ciphertext:
  plaintext += mapped[alphas.index(i)]
print(plaintext)