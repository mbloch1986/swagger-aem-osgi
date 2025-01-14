package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties._

case class OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties (
  length: Option[ConfigNodePropertyInteger])

object OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties {
  import DateTimeCodecs._

  implicit val OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesCodecJson: CodecJson[OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties] = CodecJson.derive[OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties]
  implicit val OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesDecoder: EntityDecoder[OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties] = jsonOf[OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties]
  implicit val OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesEncoder: EntityEncoder[OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties] = jsonEncoderOf[OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties]
}
