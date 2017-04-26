# drupalsynergy.org

## What is this

Drupal code base that runs on Drupal Synergy site (https://drupalsynergy.org). Set up is based on drupal-project (https://github.com/drupal-composer/drupal-project)

## Prerequisities

- Composer - [Installation instructions](https://getcomposer.org/doc/00-intro.md#installation-linux-unix-osx)
- Docker compose - [Installation instructions](https://docs.docker.com/compose/install/)

while not strictly required, we strongly recommend docker compose for local development.

## Local installation

- Install composer dependencies with `composer install`
- Copy `docker-compose.default.yml` to `docker-compose.yml`
- Generate and set root and application MariaDB passwords. **Note** this step is required, you will not be able to use exact copy of docker-compose.yml due to security considerations.
- Launch docker containers with `docker-compose up -d`
- Access the site at `http://localhost:8701`