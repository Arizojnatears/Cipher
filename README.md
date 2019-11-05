# Cipher
A program to decode a cipher and print it back according to certain conditions

* Entered text should be filtered in order to only accept lower case letters, space  characters and digits (0-9). The maximum length of the text should be 25 characters.
* Lower case letters should be replaced by the next CAPITAL letter in the alphabet.   An ’a’ will thereby be exchanged for a ’B’ and ’z’ with an ’A’
* Digits are modified using the following formula:   new digit = the lower part of (number of letters in the text + entered digit)   If there are 5 letters in the text digit 3 will be replaced by 8, digit 9 with 4 etc
* Space characters are exchanged by the corresponding lower case letter representingt   the order of the space in the original text.   A space in position 3 in the filtered entered text will thereby be replaced by ’c’.   All lower case letters, after exchange, are moved to the end of the text
* Finally the encoded text should be presented in backwards order.