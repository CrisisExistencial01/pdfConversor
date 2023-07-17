import os
import PyPDF2
import pyth
def ToMobi(IFile, OFile):
    with open(IFile, 'rb') as f:
        reader = PyPDF2.PdfFileReader(f)
        content = ''


