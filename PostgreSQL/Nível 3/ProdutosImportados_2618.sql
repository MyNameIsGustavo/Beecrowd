/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Produtos Importados.	
	ID: 2618
	Status da submissão: ACEITA.
*/

SELECT Produtos.name, Fornecedores.name, Categoria.name

FROM categories Categoria 

INNER JOIN 
products Produtos ON Produtos.id_categories = Categoria.id 

INNER JOIN 
providers Fornecedores ON Produtos.id_providers = Fornecedores.id

WHERE Fornecedores.name = 'Sansul SA' AND Categoria.name = 'Imported';