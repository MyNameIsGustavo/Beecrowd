/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Produtos por categorias.	
	ID: 2609
	Status da submissão: ACEITA.
*/

SELECT Categorias.name, sum(Produtos.amount) AS "sum"
FROM categories Categorias, products Produtos
WHERE Categorias.id = Produtos.id_categories
GROUP BY Categorias.name;