<h1>Checkpoint 01 - O Caso da Vinheria Agnello</h1>
<img src="img/circuitoCompleto.png">
<p>Este projeto consiste em um sistema de alarme desenvolvido no Tinkercad para monitorar a luminosidade do ambiente de uma vinheria. O objetivo é oferecer uma solução simples e eficaz para a vinheria (empresa fictícia) que deseja ampliar seu mercado através do serviço de delivery de vinhos.</p>
<p>Projeto desenvolvido como parte da atividade de Edge Computing e Computer Systems na <a href="">FIAP</a> ministrada pelo professor <a href="https://www.linkedin.com/in/fabio-cabrini?miniProfileUrn=urn%3Ali%3Afs_miniProfile%3AACoAAA4IttQBKDdr5cvPzUTzpVSkZFkQM-qKngk&lipi=urn%3Ali%3Apage%3Ad_flagship3_search_srp_all%3B3UXPOnpXR6qTOU9g%2FnseBQ%3D%3D" target="_blank">Fábio Cabrini</a>.</p>
<strong>Link do circuíto no Tinkercad: <a href="https://www.tinkercad.com/things/6XkaoIcddoI-checkpoint-01-o-caso-da-vinheria-agnello?sharecode=-Q2lourL5RZWIIbr1KeHDirmnVRXhNf9TnNRq1CRUdM">Checkpoint 01 - O Caso da Vinheria Agnello</a></strong>

<h2>Contexto e Descrição do Desafio</h2>
<p>Vocês foram contratados pela Vinheria Agnello para desenvolver um sistema de monitoramento a ser instalado 
no ambiente em que os vinhos são armazenados. O dono a Vinheria informou que a qualidade do vinho é 
influenciada diretamente pelas condições de temperatura, umidade e luminosidade do ambiente. Neste 
primeiro momento, você propôs ao dono da Vinheria um projeto em etapas, de modo que seu 1° desafio é:</p>
<ul>
  <li>Elaborar um sistema usando Arduino que faça a captura das informações de luminosidade do ambiente. Para 
isso pesquise sobre o LDR e sobre conversores analógico para digital do Arduino. Verifique como eles 
funcionam e como poderiam ser usados no projeto.</li>
  <li>De posse dos dados coletados, implemente um sistema de alarme, utilizando LEDs, para sinalizar quando o a 
ambiente estiver OK, ou quando alguma grandeza estiver fora dos limites estipulados. Use um LED verde 
para indicar que está OK, um LED amarelo para indica que está em níveis de alerta e um LED Vermelho para 
indicar que tem algum problema.</li>
  <li>Quando a luminosidade estiver em nível de alerta, deve soar uma buzina (buzzer) por 3 segundos. A buzina 
volta a soar caso a luminosidade permaneça em nível de alerta.</li>
</ul>

<h2>Descrição: </h2>
<p>O sistema de alarme é composto por um Arduino, um sensor de luminosidade (LDR), três LEDs e um buzzer. O Arduino monitora continuamente a luminosidade ambiente usando o sensor de luminosidade. O nível de luminosidade é mostrado através dos LEDs, considerando que o nível ideal de luminosidade para o armazenamento de vinhos é baixo. Em caso de níveis de luminosidade de alerta, o LED amarelo será aceso e caso o nível seja crítico será aceso o LED vermelho e o buzzer emitirá um som de perigo durante 3 segundos.</p>

<h2>Dependências: </h2>
<p>Para reproduzir este projeto, você precisará dos seguintes materiais: </p>
<ul>
  <li>1 Arduino (ou simulador como Tinkercad);</li>
  <li>1 Sensor de luminosidade (LDR);</li>
  <li>3 LEDs;</li>
  <li>1 Buzzer;</li>
  <li>Resistores para limitar a corrente dos LEDs;</li>
  <li>Fios de conexão.</li>
</ul>

<h2>Como Reproduzir: </h2>
<ol>
  <li>Monte o circuito conforme mostrado no diagrama no Tinkercad ou em uma placa física, conectando o Arduino ao sensor de luminosidade, LEDs e buzzer conforme as instruções.</li>
  <li>Abra o código fornecido neste repositório em um ambiente de desenvolvimento Arduino IDE.</li>
  <li>Carregue o código para o Arduino.</li>
  <li>Alimente o Arduino.</li>
  <li>O sistema agora está pronto para monitorar a luminosidade do ambiente. Quando estiver muito claro, o LEDs piscará e o buzzer emitirá um som para alertar sobre a condição de alta luminosidade.</li>
</ol>

<h2>Funcionamento: </h2>
<p>Luminosidade OK: </p>
<img src="img/testeOk.png" alt="Teste OK">
<p>Luminosidade Alerta: </p>
<img src="img/testeAlerta.png" alt="Teste Alerta">
<p>Luminosidade Perigo: </p>
<img src="img/testePerigo.png" alt="Teste Perigo">
<p>Código no Tinkercad</p>
<img src="img/codigoTinkerCad.png" alt="Código Tinkercad">
<p>Registro Serial: </p>
<img src="img/SerialRegister.png" alt="Registro Serial">



