"""	
    Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: Python.
	Nome do exercício: Tuitando. 
	ID: 2165
	Status da submissão: ACEITA.
"""

texto = str(input ())

tamanhotexto = len (texto)

if tamanhotexto > 140:
    print("MUTE")
else:
    print("TWEET")