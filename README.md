
# Curso programador raiz

Iniciaremos um curso contínuo as quartas das 19:00 as 20:00 hs sobre arquitetura e desenvolvimento de software e convidamos você para participar desta oportunidade.

## Motivação:

Engenharia de Dados requer um conhecimento profundo sobre arquitetura de serviços e armazenamento de dados. Diversas tecnologias existem no mercado e cada uma tem seu propóstio. Saber como cada tecnologia funciona e quais os pontos fortes e fracos é de extrema importância. Nós na fdex estamos cada vez mais sentindo esta necessidade e queremos dar a oportunidade para que você venha contribuir conosco.

## Objetivo:

Treinar os desenvolvedores que não necessariamente fizeram um curso de ciencias ou engenharia da computação ou que tiveram pouco contato com desenvolvimento baixo nível, ou que simplesmente gostam de novos desafios.

## Formato:

As aulas serão iniciadas com exposição de 3 slides com conteúdo sobre arquitetura, depois seguimos para programação em pares e os minutos finais para cada um mostrar um pouco das dificuldades.

Obs: Criaremos os serviços em linguagem c/c++

## Dependências do projeto

- Docker
- Git
- Editor de texto (Visual studio code, atom, sublime ou qualquer um de sua preferência)

Escolhemos para este curso o Visual Studio Code que pode ser baixado no link [Visual Studio Code](https://code.visualstudio.com/)

## Git
Usaremos git como controle de versão

### Instalando git no Windows

Download windows [Download](https://git-scm.com/download/win)

### Instalando git no Mac

No mac a ferramenta recomendada é o [homebrew](https://brew.sh/index_pt-br)

Após instalado abrir o terminal e executar ```brew install git```

### Instalando git no linux

Os comandos para instalação do git no linux estão levando em consideração que a sua distribuição linux é baseada no debian, para instalar o git em outras versões de linux você pode encontrar informações detalhadas na internet.

No terminal execute ```apt-get install git```

### Docker

Usaremos docker para facilitar o desenvolvimento do projeto, você pode instalar o docker através do link:

[Docker Windows](https://docs.docker.com/docker-for-windows/install/)

### Instalando docker no mac

No mac basta instalar o docker for mac [https://docs.docker.com/docker-for-mac/install](https://docs.docker.com/docker-for-mac/install)

### Instalação docker no linux

No ubuntu novamente, abrir o terminal e executar ```apt-get install docker-ce docker-compose```

### Github

Instalar o cliente para o github https://desktop.github.com/


## Instalando o projeto

Fazer clone deste repositório ```git clone https://github.com/Programador-Raiz/programador-raiz.git```

-  Entrar na pasta do projeto e rodar o docker-compose

```docker-compose run raiz bash```

Com esse comando você já estará dentro do container docker e conseguirá compilar o programa em c++.

- Compilando um programa em c++

No terminal execute

```g++ -o (nome do programa) (arquivo do programa)```

Exemplo:

```g++ -o hello hello .cpp```

## Dúvidas

Para dúvidas podemos usaar o grupo no whatsapp e canal no slack
