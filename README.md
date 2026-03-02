# Robô Seguidor de Linha

## Visão Geral
Este projeto consiste no desenvolvimento de um **robô seguidor de linha**, realizado como parte de uma disciplina do curso de **Engenharia de Controle e Automação**. O objetivo principal foi a participação em uma **competição entre equipes**, na qual os robôs deveriam percorrer um circuito surpresa no menor tempo possível, utilizando **exclusivamente os componentes fornecidos**.

O projeto envolveu etapas de **modelagem 3D**, **programação embarcada**, **montagem eletrônica** e **definição de estratégias de controle**, com foco em desempenho, estabilidade e confiabilidade.

---

## Objetivos do Projeto
- Desenvolver um robô capaz de seguir uma linha preta com precisão  
- Otimizar a organização física, o peso e o aproveitamento de espaço  
- Concluir o percurso no menor tempo possível  

---

## Componentes Utilizados
Os seguintes componentes foram fornecidos e constituíram o único conjunto permitido no projeto:

- 2 sensores infravermelhos  
- 2 motores DC  
- 4 pilhas AA  
- 1 Arduino Mega  
- 1 ponte H  
- 1 porta-pilhas  
- Jumpers  
- 1 protoboard  
- 1 esfera deslizante (roda livre)  

---

## Estrutura e Montagem
O chassi do robô foi projetado e modelado em 3D, com foco na estabilidade, na correta distribuição dos componentes e na melhoria do desempenho ao longo do circuito.

Durante a montagem física, foram adotadas as seguintes práticas:
- Utilização de abraçadeiras para fixação e organização dos componentes  
- Substituição da protoboard padrão por uma **mini protoboard**, visando melhor aproveitamento de espaço e redução de peso  

---

## Projeto Elétrico
O esquema de ligações elétricas foi planejado e documentado utilizando o **Tinkercad**, garantindo a correta integração entre:
- Sensores infravermelhos  
- Motores DC  
- Ponte H  
- Arduino Mega  

Essa etapa foi essencial para assegurar confiabilidade elétrica e facilitar ajustes e testes ao longo do desenvolvimento.

---

## Lógica de Controle e Programação
O robô foi programado em **C++**, utilizando uma lógica baseada na leitura dos sensores infravermelhos.

### Funcionamento Básico
- Enquanto um sensor não detecta a linha preta, a roda correspondente permanece girando para frente  
- Quando um sensor detecta a linha preta, a roda associada passa a girar para trás, permitindo a correção da trajetória  

### Estratégia para Curvas
Para melhorar o desempenho em curvas, foi implementada uma lógica adicional:
- Ao identificar uma curva, uma das rodas gira para trás, facilitando a execução da curva  
- Essa abordagem reduziu o tempo de correção e aumentou a estabilidade do robô durante a navegação  

---

## Principal Desafio
Durante a competição, o circuito apresentou uma **curva extremamente fechada**, não prevista previamente.

### Descrição do Problema
- Nessa curva, ambos os sensores infravermelhos detectavam a linha preta simultaneamente  
- Com a lógica tradicional utilizada pela maioria das equipes, o robô acabava parando, impossibilitando a continuidade do percurso  

Como consequência, a maior parte dos robôs não conseguiu concluir o circuito.

### Restrições do Projeto
- Não era permitido utilizar sensores adicionais ou câmeras  

---

## Possível Solução Alternativa
Uma solução técnica viável para lidar com curvas muito fechadas seria a utilização de **visão computacional**, permitindo uma identificação mais precisa do traçado e um controle mais adaptativo, já que alterações na posição dos sensores não resolviam o problema sem comprometer o desempenho em outras curvas.

Entretanto, essa abordagem não era permitida devido às restrições impostas pelo projeto.

---

## Resultados
Apesar das limitações e do desafio inesperado:
- O robô conseguiu completar o circuito com sucesso  
- A equipe obteve o **menor tempo de execução**  
- O projeto alcançou o **primeiro lugar na competição**, validando as escolhas de projeto e a estratégia de controle adotada  

---

## Conclusão
Este projeto proporcionou experiência prática em:
- Robótica móvel  
- Programação embarcada  
- Montagem eletrônica  
- Modelagem mecânica  
- Resolução de problemas sob restrições reais  

A atividade reforçou a importância de soluções eficientes, organização física adequada e lógica de controle bem estruturada para o sucesso em sistemas robóticos.
