# Write your MySQL query statement below
select Person.firstName, Person.lastName, Address.city, Address.state
from Person
Left outer join Address
using (personId)