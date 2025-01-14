package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties._

case class OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties (
  enabled: Option[ConfigNodePropertyBoolean],
configPath: Option[ConfigNodePropertyString],
fallbackPaths: Option[ConfigNodePropertyArray],
configCollectionInheritancePropertyNames: Option[ConfigNodePropertyArray])

object OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourPropertiesCodecJson: CodecJson[OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties] = CodecJson.derive[OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties]
  implicit val OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourPropertiesDecoder: EntityDecoder[OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties] = jsonOf[OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties]
  implicit val OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourPropertiesEncoder: EntityEncoder[OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties] = jsonEncoderOf[OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties]
}
