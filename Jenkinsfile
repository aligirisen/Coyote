pipeline {
  agent {
    node {
      label 'jenkins-slave'
    }

  }
  stages {
    stage('Build') {
      parallel {
        stage('Build') {
          steps {
            sh 'mvn clean'
            echo 'Cleaned'
          }
        }

        stage('Test-Maven') {
          steps {
            sh 'mvn -v'
          }
        }

      }
    }

    stage('Test') {
      steps {
        echo 'Testing'
      }
    }

    stage('Deploy') {
      parallel {
        stage('Deploy') {
          steps {
            echo 'Deploying'
          }
        }

        stage('Artifact') {
          steps {
            archiveArtifacts(onlyIfSuccessful: true, defaultExcludes: true, artifacts: 'src/')
          }
        }

      }
    }

  }
}