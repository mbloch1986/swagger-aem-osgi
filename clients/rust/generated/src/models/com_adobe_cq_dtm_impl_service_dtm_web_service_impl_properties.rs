/* 
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct ComAdobeCqDtmImplServiceDtmWebServiceImplProperties {
  #[serde(rename = "connection.timeout")]
  connection_timeout: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "socket.timeout")]
  socket_timeout: Option<::models::ConfigNodePropertyInteger>
}

impl ComAdobeCqDtmImplServiceDtmWebServiceImplProperties {
  pub fn new() -> ComAdobeCqDtmImplServiceDtmWebServiceImplProperties {
    ComAdobeCqDtmImplServiceDtmWebServiceImplProperties {
      connection_timeout: None,
      socket_timeout: None
    }
  }

  pub fn set_connection_timeout(&mut self, connection_timeout: ::models::ConfigNodePropertyInteger) {
    self.connection_timeout = Some(connection_timeout);
  }

  pub fn with_connection_timeout(mut self, connection_timeout: ::models::ConfigNodePropertyInteger) -> ComAdobeCqDtmImplServiceDtmWebServiceImplProperties {
    self.connection_timeout = Some(connection_timeout);
    self
  }

  pub fn connection_timeout(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.connection_timeout.as_ref()
  }

  pub fn reset_connection_timeout(&mut self) {
    self.connection_timeout = None;
  }

  pub fn set_socket_timeout(&mut self, socket_timeout: ::models::ConfigNodePropertyInteger) {
    self.socket_timeout = Some(socket_timeout);
  }

  pub fn with_socket_timeout(mut self, socket_timeout: ::models::ConfigNodePropertyInteger) -> ComAdobeCqDtmImplServiceDtmWebServiceImplProperties {
    self.socket_timeout = Some(socket_timeout);
    self
  }

  pub fn socket_timeout(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.socket_timeout.as_ref()
  }

  pub fn reset_socket_timeout(&mut self) {
    self.socket_timeout = None;
  }

}



