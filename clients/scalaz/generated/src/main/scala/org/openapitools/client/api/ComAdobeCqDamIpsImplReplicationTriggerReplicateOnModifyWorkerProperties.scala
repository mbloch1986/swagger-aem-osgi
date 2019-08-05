package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties._

case class ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties (
  dmreplicateonmodifyEnabled: Option[ConfigNodePropertyBoolean],
dmreplicateonmodifyForcesyncdeletes: Option[ConfigNodePropertyBoolean])

object ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerPropertiesCodecJson: CodecJson[ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties] = CodecJson.derive[ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties]
  implicit val ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerPropertiesDecoder: EntityDecoder[ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties] = jsonOf[ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties]
  implicit val ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerPropertiesEncoder: EntityEncoder[ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties] = jsonEncoderOf[ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties]
}