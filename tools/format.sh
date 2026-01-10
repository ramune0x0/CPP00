#!/usr/bin/env bash
set -euo pipefail

# Backward-compatible wrapper. Prefer: CPP/tools/format.sh
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
exec "$SCRIPT_DIR/../../tools/format.sh" "$@"

