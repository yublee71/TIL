word = input().upper()
u_chars = list(set(word))
chars = [word.count(c) for c in u_chars]
print(u_chars[max(list(range(len(chars))), key=chars.__getitem__)])