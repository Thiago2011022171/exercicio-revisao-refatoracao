# Exercício Pull Request
1	Alteração de privilégio de acesso aos atributos da classe "Empregado": salarioHora (para Private); quotaMensalVendas (para Private).
2	Separação da interface e implementação da classe "Empregado" e seus métodos. Criação de "Empregado.cpp".
3	Na classe "Empregado", Eliminação de "número mágico": Substituição de 8 pela constante HORAS_REGULARES.
4	Na classe "Empregado", Criação dos métodos getSalarioHora() e getQuotaMensalVendas() para acesso protegido aos atributos privados "salarioHora" e "quotaMensalVendas".
5	Separação da interface e implementação da classe "Engenheiro" e seus métodos. Criação de "Engenheiro.hpp".
6	Na classe "Engenheiro", modificação para "privado" do provilégio de acesso dos atributos "nome" e "projetos".
7	Na classe "Engenheiro", criação dos métodos públicos getNome() e getProjetos() para acessar os atributos privados.
8	Separação da interface e implementação da classe "Vendedor" e seus métodos. Criação de "Vendedor.hpp".
9	Transferência do atributo "quotaMensalVendas" da super classe "Empregado" para a subclasse "Vendedor".
10	Transferência do método "getQuotaMensalVendas()" da super classe "Empregado" para a subclasse "Vendedor".
11	Em "Vendedor.cpp", substituição do "número mágico" 12 pela constante TOTAL_MESES_ANO.
12	Na classe "Empregado" inclusão dos métodos setNome() e setSalarioHora().
13	Transferência do atributo nome das subclasses "Engenheiro" e "Vendedor" para a super classe "Empregado".
14	Na classe "Engenheiro", criação do método setProjetos().
15	No programa "Main", inclusão das funções "get" e "set" de cada um dos objetos das classes instanciadas em substituição aos acessos diretos que estavam sendo feitos originalmente.

