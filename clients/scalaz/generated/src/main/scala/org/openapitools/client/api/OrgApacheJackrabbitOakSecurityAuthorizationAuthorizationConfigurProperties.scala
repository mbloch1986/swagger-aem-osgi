package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties._

case class OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties (
  permissionsJr2: Option[ConfigNodePropertyDropDown],
importBehavior: Option[ConfigNodePropertyDropDown],
readPaths: Option[ConfigNodePropertyArray],
administrativePrincipals: Option[ConfigNodePropertyArray],
configurationRanking: Option[ConfigNodePropertyInteger])

object OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties {
  import DateTimeCodecs._

  implicit val OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurPropertiesCodecJson: CodecJson[OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties] = CodecJson.derive[OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties]
  implicit val OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurPropertiesDecoder: EntityDecoder[OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties] = jsonOf[OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties]
  implicit val OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurPropertiesEncoder: EntityEncoder[OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties] = jsonEncoderOf[OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties]
}