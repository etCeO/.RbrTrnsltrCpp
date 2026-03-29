# Robber Language Translator

- A program that parses a text-based script file and translates it into structured HTML using the Robber Language, demonstrating file processing, custom language translation, and automated web-oriented output generation.

## Author Info

- Full Name: Ethan E. Lopez
- Chapman Email: etlopez@chapman.edu


## Source Files
- Main.cpp
- FileProcessor.cpp
- FileProcessor.h
- Translator.cpp
- Translator.h
- Model.cpp
- Model.h
- Input.txt

## Errors
- N/A

## Instructions For Running
- To compile: g++ *.cpp -o robber.exe
- To run: ./robber Input.txt

## Usage

This program translates plain text into Robber Language and formats the result into HTML.

### How The Program Works
---

1. Reads a structured or semi-structured text file
2. Processes each line and token (words, punctuation, etc.)
3. Translates text into Robber Language:
- Consonants are duplicated with an “o” inserted between them
4. Wraps the translated content in HTML tags
5. Outputs the final formatted result
   
### Robber Language Rules
---

Each consonant is transformed as:

C → C + 'o' + C

Example:

- b → bob
- t → tot

Vowels remain unchanged:

- a, e, i, o, u

Example Translation

Original | Robber Language
hello	   | hohelollolo
cat	     | cocatot
robbers	 | rorobobboberorsos

Example Execution
- ./robber Input.txt

Example Output (conceptual HTML file):

<html>
  <body>
    <p>Hohelollolo wowororloldod!</p>
  </body>
</html>
