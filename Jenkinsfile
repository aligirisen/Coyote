node {
  stage('JIRA') {
    withEnv(['JIRA_SITE=http://agiri.atlassian.net/']) {
      def testIssue = [fields: [ project: [id: '10000'],
                                 summary: 'New JIRA Created from Jenkins.',
                                 description: 'New JIRA Created from Jenkins.',
                                 issuetype: [id: '3']]]

      response = jiraNewIssue issue: testIssue

      echo response.successful.toString()
      echo response.data.toString()
    }
  }
}
