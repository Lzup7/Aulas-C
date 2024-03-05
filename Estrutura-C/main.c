Segurança Cibernética
Alunos: Lucas Emanuel/Josielson Ferreira

Documentação:

1ªTemplate Injection(T1221):
Usado para criar ou modificar referências em modelos de documento do usuário para ocultar códigos maliciosos ou forçar tentativas de autenticação. Como exemplo o Office Open XML (OOXML) da Microsoft define um formato baseado em XML para documentos do Office (.docx, xlsx, .pptx) para substituir formatos binários mais antigos (.doc, .xls, .ppt). Os arquivos OOXML são compactados em arquivos ZIP compostos de vários arquivos XML, chamados de partes, contendo propriedades que definem coletivamente como um documento é renderizado.

Esse modelo é ultilizado para ocultar inicialmente o código malicioso a ser executado por meio de documentos do usuário. As referências de modelo injetadas em um documento podem permitir que cargas maliciosas sejam buscadas e executadas quando o documento é carregado.Esses documentos podem ser entregues por meio de outras técnicas, como phishing e/ou Taint Shared Content.

Mitigação:
A melhor maneira de evitar a Template Injection  é não permitir que nenhum usuário modifique ou envie novos arquivos de fontes não oficias da empresa. No entanto, isso às vezes é inevitável devido a requisitos de negócios.

Uma das maneiras de evitar isso  é apenas executar o código dos usuários em um ambiente de sandbox onde módulos e funções potencialmente perigosos foram removidos completamente. Infelizmente, o código não confiável de sandbox é inerentemente difícil e propenso a desvios.

Por fim, outra abordagem complementar é aceitar que a execução arbitrária de código é praticamente inevitável.







