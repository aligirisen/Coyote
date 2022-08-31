pipeline {
     agent any
     stages {
         stage('Build') {
             steps {
                 echo 'Building...'
             }
             post {
                 always {
                     // previous to version 2.0.0 you must provide parameters to this command (see below)!
                      jiraSendBuildInfo()
                     echo jiraSendBuildInfo()
                 }
             }
         }
         stage {
            steps{
                echo 'Deploying...'
            }
            post {
                always{
                    jiraSendDeploymentInfo environmentId: 'us-stg-1', environmentName: 'us-stg-1', environmentType: 'staging'
                }
            }
         }
     }
 }
