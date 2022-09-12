pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        sh 'make clean'
        sh 'make'
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
            archiveArtifacts(onlyIfSuccessful: true, defaultExcludes: true, artifacts: 'src')
          }
        }

      }
    }

  }
}