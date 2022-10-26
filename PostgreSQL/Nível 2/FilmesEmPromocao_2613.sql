/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Filmes em promoção. 
	ID: 2613
	Status da submissão: ACEITA.
*/

SELECT movies.id, movies.name
FROM movies, prices
WHERE movies.id_prices = prices.id AND prices.value < 2.0;