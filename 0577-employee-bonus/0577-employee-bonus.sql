# Write your MySQL query statement below
select e.name, b.bonus
from Employee e LEFT JOIN Bonus b
ON e.empId = b.empId
WHERE b.bonus < 1000 or b.bonus IS NULL