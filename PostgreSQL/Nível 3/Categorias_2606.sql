/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Categorias.	
	ID: 2606
	Status da submissão: ACEITA.
*/

SELECT Produtos.id, Produtos.name
FROM products Produtos, categories Categorias
WHERE Categorias.name LIKE 'super%' AND Produtos.id_categories = Categorias.id;