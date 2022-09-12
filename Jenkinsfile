pipeline {
  agent {
    node {
      label 'jenkins-slave'
    }

  }
  stages {
    stage('Build') {
      steps {
        sh 'cd src'
        echo 'Cleaned and compiled'
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