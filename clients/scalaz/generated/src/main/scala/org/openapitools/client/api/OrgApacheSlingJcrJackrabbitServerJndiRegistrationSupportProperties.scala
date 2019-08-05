package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties._

case class OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties (
  javaNamingFactoryInitial: Option[ConfigNodePropertyString],
javaNamingProviderUrl: Option[ConfigNodePropertyString])

object OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportPropertiesCodecJson: CodecJson[OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties] = CodecJson.derive[OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties]
  implicit val OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportPropertiesDecoder: EntityDecoder[OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties] = jsonOf[OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties]
  implicit val OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportPropertiesEncoder: EntityEncoder[OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties] = jsonEncoderOf[OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties]
}