-- SELECT *
-- FROM customers
-- WHERE state = 'VA' OR state = 'GA' OR state = 'FL'


-- SELECT *
-- FROM customers
-- WHERE state IN ('VA', 'FL', 'GA')


-- SELECT *
-- FROM customers
-- WHERE state NOT IN ('VA', 'FL', 'GA')


Select *
FROM products
WHERE quantity_in_stock IN ('49', '38', '72')