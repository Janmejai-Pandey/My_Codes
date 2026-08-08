# caesar_cipher_decode.py
def caesar_cipher_decode(encoded_text, shift):
    decoded_text = ""
    for char in encoded_text:
        if char.isalpha():
            shift_amount = shift % 26
            if char.islower():
                decoded_char = chr((ord(char) - ord('a') - shift_amount) % 26 + ord('a'))
            else:
                decoded_char = chr((ord(char) - ord('A') - shift_amount) % 26 + ord('A'))
            decoded_text += decoded_char
        else:
            decoded_text += char
    return decoded_text

encoded = input("Enter the encoded text: ")
shift_value = int(input("Enter the shift value: "))
decoded = caesar_cipher_decode(encoded, shift_value)
print("Decoded text:", decoded)