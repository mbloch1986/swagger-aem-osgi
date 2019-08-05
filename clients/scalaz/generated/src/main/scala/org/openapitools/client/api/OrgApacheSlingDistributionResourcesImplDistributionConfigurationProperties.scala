package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties._

case class OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties (
  providerRoots: Option[ConfigNodePropertyString],
kind: Option[ConfigNodePropertyString])

object OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingDistributionResourcesImplDistributionConfigurationPropertiesCodecJson: CodecJson[OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties] = CodecJson.derive[OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties]
  implicit val OrgApacheSlingDistributionResourcesImplDistributionConfigurationPropertiesDecoder: EntityDecoder[OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties] = jsonOf[OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties]
  implicit val OrgApacheSlingDistributionResourcesImplDistributionConfigurationPropertiesEncoder: EntityEncoder[OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties] = jsonEncoderOf[OrgApacheSlingDistributionResourcesImplDistributionConfigurationProperties]
}