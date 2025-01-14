package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties._

case class OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties (
  tokenExpiration: Option[ConfigNodePropertyString],
tokenLength: Option[ConfigNodePropertyString],
tokenRefresh: Option[ConfigNodePropertyBoolean],
tokenCleanupThreshold: Option[ConfigNodePropertyInteger],
passwordHashAlgorithm: Option[ConfigNodePropertyString],
passwordHashIterations: Option[ConfigNodePropertyInteger],
passwordSaltSize: Option[ConfigNodePropertyInteger])

object OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties {
  import DateTimeCodecs._

  implicit val OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraPropertiesCodecJson: CodecJson[OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties] = CodecJson.derive[OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties]
  implicit val OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraPropertiesDecoder: EntityDecoder[OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties] = jsonOf[OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties]
  implicit val OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraPropertiesEncoder: EntityEncoder[OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties] = jsonEncoderOf[OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties]
}
