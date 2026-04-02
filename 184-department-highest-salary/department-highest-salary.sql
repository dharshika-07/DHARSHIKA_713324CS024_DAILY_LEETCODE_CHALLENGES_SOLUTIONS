SELECT Department, Employee, Salary
FROM(
SELECT d.name as Department, 
    e.name as Employee,
    Salary,
    DENSE_RANK() OVER(PARTITION BY departmentID
                    ORDER BY salary DESc) AS r
FROM Employee e
JOIN Department d
ON e.departmentId=d.id) as temp
WHERE r=1;