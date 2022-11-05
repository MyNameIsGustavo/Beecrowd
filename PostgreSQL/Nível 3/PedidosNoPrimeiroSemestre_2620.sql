/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Pedidos no Primeiro Semestre.	
	ID: 2620
	Status da submissão: ACEITA.
*/

SELECT Clientes.name, Pedidos.id
FROM customers Clientes

INNER JOIN orders Pedidos ON Clientes.id = Pedidos.id_customers

WHERE orders_date BETWEEN '2016/01/01' AND '2016/06/30';