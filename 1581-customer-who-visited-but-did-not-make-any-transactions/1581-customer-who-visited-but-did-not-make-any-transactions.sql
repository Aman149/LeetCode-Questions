# Write your MySQL query statement below
SELECT v.customer_id, COUNT(v.visit_id) AS count_no_trans
FROM Visits v 
WHERE v.visit_id NOT IN (SELECT t.visit_id from Transactions t)
GROUP BY customer_id;
