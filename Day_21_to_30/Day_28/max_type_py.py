text = "leet code"
brokenLetters = "e"

words = text.split(" ")
cnt = 0
for i in words:
    if(all([c not in brokenLetters for c in i])):
        cnt+=1
# print(words)
# m = 0;

# index = []
# for i in words:
#     for j in i:
#         if(j not in brokenLetters):
#             index.append(1)
#         else:
#             index.append(0)
#     if(all(index)):
#         cnt +=1
# # if()
print(cnt)
# print(words[len(words)-1])
# print(cnt)