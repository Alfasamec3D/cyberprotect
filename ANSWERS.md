1. Кешировать срабатывание правил, у которых условия не изменились, хранить список изменённых переменных, проверять только те правила, в которых они участвуют.
2. Да, результат вывода может быть неоднозначным. При одинаковом наборе правил, но при разных порядках их проверки (отсутствии приоритета проверки) и соответственно выполнения изменения значения переменных результат может отличаться.
3. Да, например при циклических правилах:
A=true -> B=true
B=true -> A=false
A=false -> B=false
B=false -> A=true

Методы борьбы с этим:
Ввести ограничение на число итераций проверки правил.
Анализировать изменение переменных, останавливать машину при циклическом повторении состояний.
Анализировать правила на цикличность.