word= "wewishtoreplaceplayer"
plainword=""
for i in word:
   plainword+=i
uniq_plaintext=list(set(plainword))
alphas=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','s','t','u','v','w','x','y','z']
ciphertext=""
for i in plainword:
    ciphertext+=alphas[(alphas.index(i)+uniq_plaintext.index(i))%26]
print(ciphertext)