package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingCaconfigImplConfigurationResolverImplProperties._

case class OrgApacheSlingCaconfigImplConfigurationResolverImplProperties (
  configBucketNames: Option[ConfigNodePropertyArray])

object OrgApacheSlingCaconfigImplConfigurationResolverImplProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingCaconfigImplConfigurationResolverImplPropertiesCodecJson: CodecJson[OrgApacheSlingCaconfigImplConfigurationResolverImplProperties] = CodecJson.derive[OrgApacheSlingCaconfigImplConfigurationResolverImplProperties]
  implicit val OrgApacheSlingCaconfigImplConfigurationResolverImplPropertiesDecoder: EntityDecoder[OrgApacheSlingCaconfigImplConfigurationResolverImplProperties] = jsonOf[OrgApacheSlingCaconfigImplConfigurationResolverImplProperties]
  implicit val OrgApacheSlingCaconfigImplConfigurationResolverImplPropertiesEncoder: EntityEncoder[OrgApacheSlingCaconfigImplConfigurationResolverImplProperties] = jsonEncoderOf[OrgApacheSlingCaconfigImplConfigurationResolverImplProperties]
}