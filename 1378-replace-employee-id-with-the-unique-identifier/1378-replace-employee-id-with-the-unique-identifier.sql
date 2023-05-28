# Write your MySQL query statement below
SELECT det.unique_id, emp.name 
from Employees emp LEFT JOIN  EmployeeUNI det
ON emp.id = det.id