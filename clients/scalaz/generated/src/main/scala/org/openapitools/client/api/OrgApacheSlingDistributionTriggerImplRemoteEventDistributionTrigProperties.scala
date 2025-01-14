package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties._

case class OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties (
  name: Option[ConfigNodePropertyString],
endpoint: Option[ConfigNodePropertyString],
transportSecretProviderTarget: Option[ConfigNodePropertyString])

object OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigPropertiesCodecJson: CodecJson[OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties] = CodecJson.derive[OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties]
  implicit val OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigPropertiesDecoder: EntityDecoder[OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties] = jsonOf[OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties]
  implicit val OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigPropertiesEncoder: EntityEncoder[OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties] = jsonEncoderOf[OrgApacheSlingDistributionTriggerImplRemoteEventDistributionTrigProperties]
}
