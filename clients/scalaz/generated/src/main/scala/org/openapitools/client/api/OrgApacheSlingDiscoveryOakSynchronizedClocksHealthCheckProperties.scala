package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties._

case class OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties (
  hcName: Option[ConfigNodePropertyString],
hcTags: Option[ConfigNodePropertyArray],
hcMbeanName: Option[ConfigNodePropertyString])

object OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckPropertiesCodecJson: CodecJson[OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties] = CodecJson.derive[OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties]
  implicit val OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckPropertiesDecoder: EntityDecoder[OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties] = jsonOf[OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties]
  implicit val OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckPropertiesEncoder: EntityEncoder[OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties] = jsonEncoderOf[OrgApacheSlingDiscoveryOakSynchronizedClocksHealthCheckProperties]
}
