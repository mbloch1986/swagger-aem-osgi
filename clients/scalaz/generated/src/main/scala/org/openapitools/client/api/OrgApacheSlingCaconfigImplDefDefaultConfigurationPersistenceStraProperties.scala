package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties._

case class OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties (
  enabled: Option[ConfigNodePropertyBoolean])

object OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraPropertiesCodecJson: CodecJson[OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties] = CodecJson.derive[OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties]
  implicit val OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraPropertiesDecoder: EntityDecoder[OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties] = jsonOf[OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties]
  implicit val OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraPropertiesEncoder: EntityEncoder[OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties] = jsonEncoderOf[OrgApacheSlingCaconfigImplDefDefaultConfigurationPersistenceStraProperties]
}
