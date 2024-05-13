import pywhatkit as pw

txt= """ Hlw i am writing this using python language. """

pw.text_to_handwriting(txt, "demo.png",[0,0,138])
print(" END ")