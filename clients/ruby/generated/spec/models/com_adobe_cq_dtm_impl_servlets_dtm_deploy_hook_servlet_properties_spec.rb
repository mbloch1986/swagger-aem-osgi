=begin
#Adobe Experience Manager OSGI config (AEM) API

#Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API

The version of the OpenAPI document: 1.0.0
Contact: opensource@shinesolutions.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.0.1-SNAPSHOT

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for SwaggerAemOsgiClient::ComAdobeCqDtmImplServletsDTMDeployHookServletProperties
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'ComAdobeCqDtmImplServletsDTMDeployHookServletProperties' do
  before do
    # run before each test
    @instance = SwaggerAemOsgiClient::ComAdobeCqDtmImplServletsDTMDeployHookServletProperties.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of ComAdobeCqDtmImplServletsDTMDeployHookServletProperties' do
    it 'should create an instance of ComAdobeCqDtmImplServletsDTMDeployHookServletProperties' do
      expect(@instance).to be_instance_of(SwaggerAemOsgiClient::ComAdobeCqDtmImplServletsDTMDeployHookServletProperties)
    end
  end
  describe 'test attribute "dtm_staging_ip_whitelist"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "dtm_production_ip_whitelist"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
