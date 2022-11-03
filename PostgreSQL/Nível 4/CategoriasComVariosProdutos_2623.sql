/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Categorias com Vários Produtos.	
	ID: 2623
	Status da submissão: ACEITA.
*/

SELECT Produtos.name, Categorias.name
FROM products Produtos

INNER JOIN categories Categorias
ON Produtos.id_categories = Categorias.id

WHERE Produtos.amount > 100 AND Categorias.id IN(1,2,3,6,9)

ORDER BY Categorias.id ASC;