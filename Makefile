LANGS = ada ada-server android apache2 apex aspnetcore bash clojure cwiki cpp-qt5 cpp-qt5-qhttpengine-server cpp-pistache-server cpp-restbed-server cpp-restsdk cpp-tizen csharp csharp-dotnet2 csharp-nancyfx dart eiffel elixir elm erlang-client erlang-server flash scala-finch go go-server groovy kotlin kotlin-server haskell-http-client haskell java jaxrs-cxf-client java-inflector java-msf4j java-pkmst java-play-framework java-undertow-server java-vertx jaxrs-cxf jaxrs-cxf-cdi jaxrs-jersey jaxrs-resteasy jaxrs-resteasy-eap jaxrs-spec javascript javascript-flowtyped javascript-closure-angular jmeter lua nodejs-server objc openapi openapi-yaml perl php php-laravel php-lumen php-slim php-silex php-symfony php-ze-ph powershell python python-flask r ruby ruby-on-rails ruby-sinatra rust rust-server scalatra scala-akka scala-httpclient scala-gatling scala-lagom-server scalaz spring dynamic-html html html2 swift2-deprecated swift3 swift4 typescript-angular typescript-angularjs typescript-aurelia typescript-fetch typescript-inversify typescript-jquery typescript-node

ci: clean deps lint $(LANGS) doc

clean:
	rm -rf doc

deps:
	gem install bundler --version=1.17.3
	bundle install --binstubs
	npm install -g bootprint@1.0.2 bootprint-openapi@1.1.1 gh-pages@2.0.1 jsonlint@1.6.3 swagger-cli@2.2.1 swaggy-c@0.1.0
	docker pull openapitools/openapi-generator-cli:v3.3.4

lint:
	swagger-cli validate conf/*.yml
	jsonlint clients/java/conf/client.json
	jsonlint clients/javascript/conf/client.json
	jsonlint clients/python/conf/client.json
	jsonlint clients/ruby/conf/client.json

doc:
	bootprint openapi conf/api.yml doc/api/master/

doc-publish:
	gh-pages --dist doc/

release:
	rtk release

################################################################################
# Targets for generating API client for the supported languages.
################################################################################

# generate Java API client
java:
	$(call build, java, java-clean java-gen java-deps java-test java-build java-install)

# generate JavaScript/node.js API client
javascript:
	$(call build, javascript, javascript-clean javascript-gen javascript-deps javascript-install)

# generate Python API client
python:
	$(call build, python, python-clean python-gen python-deps python-test python-build python-install)

# generate Ruby API client
ruby:
	cd clients/ruby && make ci && cd ..

generate:
	for lang in ${LANGS} ; do \
	  docker \
		  run \
		  --rm \
		  -v ${PWD}:/local openapitools/openapi-generator-cli \
		  generate \
		  --input-spec /local/conf/api.yml \
			--config /local/clients/$$lang/conf/client.json \
		  --generator-name $$lang \
		  --output /local/clients/$$lang/generated/; \
	done

.PHONY: ci clean deps lint doc doc-publish java release generate $(LANGS)
