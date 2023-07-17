import argparse


# Crear un objeto ArgumentParser
parser = argparse.ArgumentParser(description='Descripción del programa')

# Definir argumentos posicionales
parser.add_argument('positional_arg', type=str, help='Descripción del argumento posicional')

# Definir argumentos opcionales
parser.add_argument('-o', '--optional_arg', type=int, help='Descripción del argumento opcional')

# Analizar los argumentos de línea de comandos
args = parser.parse_args()

# Acceder a los valores de los argumentos
print('Argumento posicional:', args.positional_arg)
print('Argumento opcional:', args.optional_arg)

