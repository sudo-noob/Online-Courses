-- SELECT *
-- FROM customers
-- ORDER BY first_name


-- SELECT *
-- FROM customers
-- ORDER BY first_name DESC


-- SELECT *
-- FROM customers
-- ORDER BY state, first_name


-- SELECT *
-- FROM customers
-- ORDER BY  state DESC, first_name DESC


-- SELECT first_name, last_name
-- FROM customers
-- ORDER BY birth_date


-- SELECT first_name, last_name, 10 AS points
-- FROM customers
-- ORDER BY points, first_name


SELECT *, quantity * unit_price AS 'Total Price' 
FROM order_items
WHERE order_id = 2
ORDER BY 'Total Price' DESC

